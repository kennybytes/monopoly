/*
 *
 * Name: celltype.h
 * Author: Kenny Luong
 * Date Created: 4/21/12
 * Date Modified: 4/24/12
 *
 * Description:
 *
 * This file contains the static celltype declarations
 * 
 */

#ifndef CELLTYPE_H
#define CELLTYPE_H

typedef int CellType;

static const CellType NON = -1;
static const CellType COMMUNITY_CHEST = 0;
static const CellType CHANCE = 1;
static const CellType UTIL = 2;
static const CellType RR = 3;
static const CellType PROP = 4;
static const CellType TAXES = 5;
static const CellType FREE_PARKING = 6;
static const CellType GO_TO_JAIL = 7;
static const CellType JAIL = 8;
static const CellType GO = 9;

#endif
