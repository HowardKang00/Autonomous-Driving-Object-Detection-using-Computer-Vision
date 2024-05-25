import onnx
import tensorflow as tf
import tf2onnx
import torch
from onnx2pytorch import ConvertModel

# Load the Keras model
loaded_model = tf.keras.models.load_model("my_model.keras")

# Find the input and output layers of the model
input_layer_name = None
output_layer_name = None
for layer in loaded_model.layers:
    if isinstance(layer, tf.keras.layers.InputLayer):
        input_layer_name = layer.name
    if layer.output.name == loaded_model.output.name:
        output_layer_name = layer.name

if input_layer_name is None or output_layer_name is None:
    raise ValueError("Failed to find input or output layer names.")

# Convert the Keras model to ONNX format
onnx_model, _ = tf2onnx.convert.from_keras_model(loaded_model, input_names=[input_layer_name], output_names=[output_layer_name])

# Convert ONNX model to PyTorch
pt_model = ConvertModel(onnx_model)

# Save the PyTorch model
torch.save(pt_model.state_dict(), 'my_model.pt')
