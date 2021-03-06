/* FILE NAME: UNITS.H
 * PROGRAMMER: RA3
 * DATE: 15.06.2016
 * PURPOSE: Unit samples creation functions.
 */

#ifndef __UNITS_H_
#define __UNITS_H_

#include "anim.h"

/* Unit ball creation function.
 * ARGUMENTS: None.
 * RETURNS:
 *   (ra3UNIT *) pointer to created unit.
 */
ra3UNIT * RA3_UnitCreateBall( VOID );

/* Unit clock creation function.      
 * ARGUMENTS: None.
 * RETURNS:
 *   (ra3UNIT *) pointer to created unit.
 */
ra3UNIT * RA3_UnitCreateClock( VOID );

/* Unit luigi creation function.
 * ARGUMENTS: None.
 * RETURNS:
 *   (ra3UNIT *) pointer to created unit.
 */
ra3UNIT * RA3_UnitCreateMario( VOID );

#endif /* __UNITS_H_ */

/* END OF 'UNITS.H' FILE */
