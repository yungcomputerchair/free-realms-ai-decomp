// addr: 0x011147c0
// name: btBoxShape_setImplicitShapeDimensionsAndRecalcAabb
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void btBoxShape_setImplicitShapeDimensionsAndRecalcAabb(void * this) */

void __thiscall btBoxShape_setImplicitShapeDimensionsAndRecalcAabb(void *this)

{
  float *in_stack_00000004;
  
                    /* Updates a Bullet btBoxShape's implicit dimensions and immediately
                       recalculates the cached local AABB. */
  btBoxShape_setImplicitShapeDimensions(this,in_stack_00000004);
  btPolyhedralConvexAabbCachingShape_recalcLocalAabb(this);
  return;
}

