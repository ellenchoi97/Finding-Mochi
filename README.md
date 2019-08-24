# Finding-Mochi
UCSD CSE 167 Final Project  
http://ivl.calit2.net/wiki/index.php/Project5F18  

Authors: Ellen Choi, Hillary Thi, Nicolas Carmont

About the Project: The project is based on the movie Big Hero 6. Baymax must navigate through the city to find the cat, Mochi.

Technical Features Implemented:
1. Toon shading  
2. Surface made with two C1 continuous Bezier patches  
3. Collision detection with bounding spheres  
4. Procedurally modeled buildings  
5. Procedurally modeled city  
6. Procedurally generated terrain (diamond-square algorithm)  
7. Procedurally generated plants with L-systems  
8. Skybox environment  

Keyboard Key Functionality:  
1: Turn the Baymax model on/off  
2: Turn the Mochi model on/off  
3: Turn the rendering for the bounding spheres on/off  
4: Turn the ocean patch on/off  
5: Turn the terrain on/off  
6: Turn the city on/off  
7: Turn the buildings on/off  
8: Turn the plants on/off  
9: Turn on/off random relocation if Baymax catches Mochi
0: Turn the testing object on/off  
C/c: Increase/Decrease the FOV (Zoom Out/Zoom In)  
o: Toggle between only rendering the ocean path and rendering all models  
p: Toggle between changing the FOV using C/c and Up/Down  
r: Change the seed value for the procedurally generated models that are on (ocean patch, terrain, city, building, plants)  
S/s: Scale the model up/down
z: Toggle between changing the value of the y coordinate or the z coordinate  
Up Arrow: Increase the value of the y coordinate or decrease the value of the z coordinate  
Down Arrow: Decrease the value of the y coordinate or increase the value of the z coordinate  
Left Arrow: Decrease the value of the x coordinate for the models that are on  
Right Arrow: Increase the value of the x coordinate for the models that are on  
F1: Go to ground view  
F2: Go to bird's eye view  

Mouse Functionality:
1. Hold the left mouse button and move the cursor to rotate the camera around the center of the world.
