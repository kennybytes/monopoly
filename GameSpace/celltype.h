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
static const CellType CHANCE = 0;
static const CellType COMMUNITY_CHEST = 1;
static const CellType UTILITY = 2;
static const CellType RAILROAD = 3
static const CellType PROPERTY = 4;
static const CellType INCOME_TAX = 5;
static const CellType LUXURY_TAX = 6
static const CellType FREE_PARKING = 7;
static const CellType GO_TO_JAIL = 8;
static const CellType JAIL = 9;
static const CellType GO = 10;

#endif
