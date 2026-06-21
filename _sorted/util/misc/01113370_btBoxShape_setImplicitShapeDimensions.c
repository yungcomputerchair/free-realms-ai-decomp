// addr: 0x01113370
// name: btBoxShape_setImplicitShapeDimensions
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void btBoxShape_setImplicitShapeDimensions(void * this, float * halfExtents)
    */

void __thiscall btBoxShape_setImplicitShapeDimensions(void *this,float *halfExtents)

{
  float fVar1;
  float fVar2;
  
                    /* Stores absolute half-extents from a 3-float vector into the shape's implicit
                       dimensions and clears the fourth component. */
  fVar1 = halfExtents[1];
  fVar2 = halfExtents[2];
  *(float *)((int)this + 0x10) = ABS(*halfExtents);
  *(float *)((int)this + 0x14) = ABS(fVar1);
  *(float *)((int)this + 0x18) = ABS(fVar2);
  *(undefined4 *)((int)this + 0x1c) = 0;
  return;
}

