---
# You don't need to edit this file, it's empty on purpose.
# Edit theme's home layout instead if you wanna make some changes
# See: https://jekyllrb.com/docs/themes/#overriding-theme-defaults
layout: collection
author_profile: true
classes: wide
collection: portfolio
entries_layout: grid
title: About Me
---

**Hello World!** My name is Hector and I am a Embedded Robotics Software Engineer at [ModalAI](https://www.modalai.com/), where I have worked on all sorts of different tech stacks from building system images and developing device drivers to autonomy features for drones. I am adept at coding in C/C++, Python, and shell scripting. I have a strong understanding of the linux operating system and i'm experienced with tools such as TensorFlow, Docker, and OpenCV.

I enjoy learning and I have found that the best way to learn something new is by teaching it. Every day I push myself to learn something new, whether that be about software engineering or a random interesting fact. 

# Learn to Code!
I often get asked by others how they can learn to code. I feel that understanding code and software is great for anyone! Whether you're looking to learn to code as a hobby or for a career change, check out the [resources tab](#) I compiled. It contains relevant and recommended resources that are great for beginners looking to learn how to code.

Also, I like to occasionally write blog posts regarding concepts/technologies that I'm learning or interested in. I hope to share what I learn with others in an easy-to-understand digestible blog post. Check out some of my recent posts in the section below, you might learn something!

# Recent Blog Posts

<div class="grid__wrapper">
  {% for post in site.posts limit:5 %}
    {% include archive-single.html type="grid" %}
  {% endfor %}
</div>
