clear all;
 clc % Clearing Matlab desktop
 import java.awt.Robot;
import java.awt.event.*;
mouse = Robot;
     
 mouse.mouseMove(1400,10);
 mouse.mousePress(InputEvent.BUTTON1_MASK);
    mouse.mouseRelease(InputEvent.BUTTON1_MASK);
    mouse.mousePress(InputEvent.BUTTON1_MASK);
    mouse.mouseRelease(InputEvent.BUTTON1_MASK);
    pause(2); 
    mouse.mousePress(InputEvent.BUTTON1_MASK);
    mouse.mouseRelease(InputEvent.BUTTON1_MASK);
    mouse.mousePress(InputEvent.BUTTON1_MASK);
    mouse.mouseRelease(InputEvent.BUTTON1_MASK);