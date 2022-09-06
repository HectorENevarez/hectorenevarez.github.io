---
title: "A Beginners Guide to Neural Networks"
author: "Hector Nevarez"
author_headshot: "general-misc/hector-nevarez-headshot.jpg"
data_published: "March 1, 2021"
mathjax: true

excerpt: Neural Networks aren't as complicated as they seem. This post provides a comprehensive breakdown of neural networks 
tagline: "An introduction to Neural Networks"

featured_image: "nn-misc/artificial-neural-network-3501528_1920.png"

tags:
  - Neural Networks
  - Artificial Intelligence
  - Programming
  - Python
---

A foundational piece to learning artificial intelligence is understanding the architecture of neural networks. Many are frightened by the "complexity" of this topic but in fact, neural networks aren't that complicated. This post aims to demystify neural networks by providing an intuitive and comprehensive tutorial on the inner workings of neural networks.

This post is intended for beginners with no previous experience in artificial intelligence but should also provide value to even those who already have a solid background in this field. We'll be going over the inner workings of neural networks by explaining its structure step by step.

**Let's get started!**
{: .text-center}

## What is a Neural Network?
```Neural Networks(NN)``` are sets of interconnected neurons that take in a large set of data and aim to discover an underlying pattern. While neural networks don't exactly emulate our biological neural networks, they are ```loosely inspired``` by how our brains learn.

Our brain doesn't learn concepts instantly, it usually takes different iterations of explanations and even trial and error to solidify our understanding of an idea. Imagine if you had no understanding of what cats and dogs were. If I showed you thousands of different pictures of cats and dogs, you would start to form an understanding and eventually you would become more confident in telling me which pictures were cats and which were dogs. While oversimplified, this is the basis of how neural networks learn.

Now that you have a high level overview of how neural networks learn, let's dive deeper and take a look at their structure.

![Deep Neural Network](beginners-guide-to-neural-networks-misc/DNN.png){: .align-center}

Above, we can see an example image. The neural network is composed of 3 types of layers:
- **Input Layer**—This is the input of our network where we pass in our data(This could be text, images, sound, etc.) 
- **Hidden Layer**—This layer falls in between the input and output layers. It does the mapping between the input and output layers by performing a series of mathematical operations
- **Output Layer**—This can be seen as the results of our network

> The term "deep learning" comes from neural networks with more than 1 hidden layer. These types of neural networks are called deep neural networks. The neural network figure above displays a deep neural network because it contains 2 hidden layers. Neural networks with only 1 hidden layer can be referred to as simple neural networks.

## What is the function of the neuron?
Each neuron performs a set of mathematical operations to derive an output.

![Nueron](nn-misc/Neuron.png){: .align-center}

Above is an example of a randomly selected neuron. Each neuron will have a connection with every neuron in the previous layer. The way each neuron obtains its value is simple. It begins by summing up every input. The input consists of the input value(x) as well as an associated weight(w). When the model is trained, these weights shift around in order to get the optimal model. The weights carry influence as to how strong a connection between two neurons are. The higher the weight the higher influence of the neuron. 

$$x\cdot w = (x_1\times w_1) + (x_2\times w_2) + ... + (x_n\times w_n)$$

Above we summed up every input which consisted of the input multiplied by the weight. We can further simplify this summation as the dot product of the vectors x and w.

Furthermore, we also have to add the bias(b) term to transpose the constant value to obtain the output values.

$$x\cdot w + b$$

Finally, to obtain the neurons output value, we pass it through an activation function in order to introduce non-linearity into the neurons output. Without the activation function, our neural network is essentially a linear regression model. With the activation function, our model is able to learn more complex tasks. There are several activation functions, but in this post we will be going over the **sigmoid activation function**.

<img src="nn-misc/sigmoid.png" alt="Sigmoid Function" width="500"/>{: .align-center}

To determine the output, the sigmoid activation function looks at the value obtained and the larger the value, the closer it will be to 1. The smaller the value, the closer it will be to 0. This allows us to have output between 0 and 1 with some values carrying more weight than others.

$$\frac{1}{1+e^{-z}}$$

Above we can see the sigmoid activation function equation where z is $x\cdot w + b$.

The steps outlined above occur through every neuron in the neueral network until the network reaches its end. This process of passing data through the neural network is called **forward propogation**. Once this process is completed we move on to backpropogation.

## What is backpropogation?

**Backpropagation** fine tunes the model based on the results of forward propogation every iteration. After a forward pass, the neural network calculates the loss function and propogates those results backwards to tune the weights and biases. Since the model is updating its weights and biases every iteration, the model should become more optimized. The goal is to lower this error rate.

> The loss function is highly related to the cost function however, the loss function refers to the error of one training sample, while the cost function is the average of the entire training set.

an example of a cost function is **mean squared error(MSE)**. 

$$
\mathrm{MSE}=\frac{1}{n} \sum_{i=1}^{n}\left(Y_{i}-\hat{Y}_{i}\right)^{2}
$$

In this case we're taking the average of the sum of our actual value ($Y_{i}$) subtracted by our predicted value ($\hat{Y}_{i}$) squared. As mentioned above, our cost function is the average of our loss function, so our cost function is the equation above.

The cost function only tells us how wrong our predictions were, we now need to back propagate these results to modify our weights and biases. For this we use an optimizer.

Our optimizer tells use how to change our weights and biases to minimize loss. An example of an optimization algorithm is stochastic gradient descent. 

$$
w_{1} \leftarrow w_{1}-\eta \frac{\partial L}{\partial w_{1}}
$$

In this equation $\eta$ is our learning rate. Our learning rate controls how fast or slow our weights get updated. $\frac{\partial L}{\partial w_{1}}$ is the partial derivative of our loss with respect to weights or biases. subtracting our weight or bias from $\eta \frac{\partial L}{\partial w_{1}}$ yields us our updated weight or bias.

This process is applied to all of our weights and biases slowly updating and optimizing our model.

## Now What?
Congrats, you now understand neural networks! Like I said, neural networks are easy to understand. The best way to continue learning about neural networks is to:
1. Implement your own simple model using a library such as [TensorFlow](https://www.tensorflow.org/) or [PyTorch](https://pytorch.org/)
2. Look into different types of neural networks and their applications such as [Convolutional Neural Networks](https://hectorenevarez.github.io/AIClubWorkshopsSpring21/workshop6/CNN)
3. Read other posts or watch informative videos to solidify your understanding of neural Networks.

Thanks for reading, happy learning!