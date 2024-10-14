/*
** EPITECH PROJECT, 2024
** B-CPP-500-PAR-5-1-rtype-yanis.harkouk
** File description:
** lib
*/

#ifndef LIB_HPP_
#define LIB_HPP_

#include <raylib.h>
#include <vector>

#define SCREEN_WIDTH 1920
#define SCREEN_HEIGHT 1080

#define TO_MILLISECONDS 1000

class Lib {
  public:
    Lib() = delete;
    ~Lib() = delete;

    static Vector2 getScreenRatio();
    static int getScreenHeight();
    static int getScreenWidth();
    static bool isOnScreen(Vector2 pos);
    static double toMilliseconds(double time);
};

#endif /* !LIB_HPP_ */
