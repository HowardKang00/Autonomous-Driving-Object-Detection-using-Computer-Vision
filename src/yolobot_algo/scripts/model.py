import os

import numpy as np
import pandas as pd
import tensorflow as tf
from sklearn.preprocessing import LabelEncoder
from tensorflow.keras.layers import (Conv2D, Dense, Dropout, Flatten, Input,
                                     MaxPooling2D)
from tensorflow.keras.models import Sequential
from tensorflow.keras.utils import to_categorical


def load_data(image_dir, annotation_dir):
    images = []
    annotations = []

    # Load annotations from CSV file
    annotation_path = os.path.join(annotation_dir, "_annotations.csv")
    annotations_df = pd.read_csv(annotation_path)

    # Convert class labels to numerical format using LabelEncoder
    label_encoder = LabelEncoder()
    annotations_df['class_encoded'] = label_encoder.fit_transform(annotations_df['class'])

    for filename in os.listdir(image_dir):
        if filename.endswith('.jpg'):
            # Load image
            img_path = os.path.join(image_dir, filename)
            img = tf.keras.preprocessing.image.load_img(img_path, target_size=(64, 64))
            img_array = tf.keras.preprocessing.image.img_to_array(img)
            images.append(img_array)

            # Get annotation for this image
            annotation = annotations_df[annotations_df['filename'] == filename]
            if not annotation.empty:
                label = annotation['class_encoded'].values[0]  # Extract the encoded label
                annotations.append(to_categorical(label, num_classes=len(label_encoder.classes_)))

    return np.array(images), np.array(annotations)




# Load train, test, and validation data
train_image_dir = '/Users/howardkang/street-objects-dataset1/train'
train_annotation_dir = '/Users/howardkang/street-objects-dataset1/train'
test_image_dir = '/Users/howardkang/street-objects-dataset1/test'
test_annotation_dir = '/Users/howardkang/street-objects-dataset1/test'
valid_image_dir = '/Users/howardkang/street-objects-dataset1/valid'
valid_annotation_dir = '/Users/howardkang/street-objects-dataset1/valid'

train_images, train_annotations = load_data(train_image_dir, train_annotation_dir)
test_images, test_annotations = load_data(test_image_dir, test_annotation_dir)
valid_images, valid_annotations = load_data(valid_image_dir, valid_annotation_dir)

# Combine images and annotations
train_data = (train_images, train_annotations)
test_data = (test_images, test_annotations)
valid_data = (valid_images, valid_annotations)

#'''
# Define and compile the model
model = Sequential([
    Conv2D(32, (3, 3), activation='relu', input_shape=(64, 64, 3)),
    MaxPooling2D((2, 2)),
    Conv2D(64, (3, 3), activation='relu'),
    MaxPooling2D((2, 2)),
    Flatten(),
    Dense(64, activation='relu'),
    Dense(11, activation='softmax')  # Adjust the number of neurons and activation function
])

model.compile(optimizer='adam',
              loss='categorical_crossentropy',  # Use categorical_crossentropy for multi-class classification
              metrics=['accuracy'])
# Train the model
model.fit(train_images, train_annotations, epochs=20, validation_data=(valid_images, valid_annotations))
#'''

'''
# Adjust model architecture with dropout regularization
model = Sequential([
    Conv2D(32, (3, 3), activation='relu', input_shape=(64, 64, 3)),
    MaxPooling2D((2, 2)),
    Conv2D(64, (3, 3), activation='relu'),
    MaxPooling2D((2, 2)),
    Flatten(),
    Dropout(0.5),  # Add dropout layer with dropout rate of 0.5
    Dense(64, activation='relu'),
    Dropout(0.5),  # Add another dropout layer
    Dense(11, activation='softmax')
])

model.compile(optimizer='adam',
              loss='categorical_crossentropy',
              metrics=['accuracy'])

# Train the model with early stopping
from keras.callbacks import EarlyStopping

early_stopping = EarlyStopping(patience=3, restore_best_weights=True)
history = model.fit(train_images, train_annotations, epochs=50, validation_data=(valid_images, valid_annotations), callbacks=[early_stopping])

'''


# Evaluate the model
test_loss, test_acc = model.evaluate(test_images, test_annotations, verbose=2)
print('\nTest accuracy:', test_acc)

# Save only the model weights
model.save_weights('/Users/howardkang/street-objects-dataset1/my_model.weights.h5')

model.save("my_model.keras")