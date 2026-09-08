#include <simplecpp>
main_program{
 turtleSim();
 repeat(10){
  penDown();forward(10);
  penUp();forward(10);
  }
 wait(5);
}
