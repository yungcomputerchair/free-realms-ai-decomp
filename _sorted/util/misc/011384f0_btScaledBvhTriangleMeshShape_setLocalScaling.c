// addr: 0x011384f0
// name: btScaledBvhTriangleMeshShape_setLocalScaling
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall btScaledBvhTriangleMeshShape_setLocalScaling(int *param_1,int *param_2)

{
                    /* Sets local scaling on a Bullet scaled BVH triangle mesh shape and
                       recalculates the local AABB. */
  param_1[4] = *param_2;
  param_1[5] = param_2[1];
  param_1[6] = param_2[2];
  param_1[7] = param_2[3];
  btPolyhedralConvexAabbCachingShape_recalcLocalAabb(param_1);
  return;
}

