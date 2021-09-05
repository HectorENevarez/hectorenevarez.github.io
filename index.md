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

**Hello World!** My name is Hector and I am currently a fourth year student studying computer science at San Diego State University. I enjoy learning and I have found that the best way to learn something new is by teaching it. I apply this principle by giving [weekly workshops](https://hectorenevarez.github.io/workshops/) through [SDSU's AI Club](https://aiclub.sdsu.edu/). Every day I push myself to learn something new, whether that be about machine learning, software engineering, or a random interesting fact.

I currently work as a Software Engineer Intern at [ModalAI](https://www.modalai.com/) where I have worked on all sorts of different tech stacks from low level device drivers to autonomy features for drones. I am adept at coding in C/C++, Python, and shell scripting. I have a strong understanding of the linux operating system and i'm experienced with tools such as TensorFlow, Docker, and GStreamer. I posses strong communication and collaboration skills, critical thinking and reasoning abilities, and i'm quick learner.

# Recent Posts
I like to occasionally write blog posts regarding concepts/technologies that I'm learning or interested in. I hope to share what I learn with others in an easy-to-understand digestible blog post. Check out some of my recent posts, you might learn something!

<div class="grid__wrapper">
  {% for post in site.posts limit:5 %}
    {% include archive-single.html type="grid" %}
  {% endfor %}
</div>
