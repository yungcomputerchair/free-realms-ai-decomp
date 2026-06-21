// addr: 0x01136b60
// name: btScaledBvhTriangleMeshShape_ctor
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __thiscall
btScaledBvhTriangleMeshShape_ctor(undefined4 *param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
                    /* Constructs Bullet btScaledBvhTriangleMeshShape: calls btConcaveShape
                       constructor, installs vtable, stores child mesh and local scaling, and sets
                       shape type. */
  btConcaveShape_ctor(param_1);
  *param_1 = btScaledBvhTriangleMeshShape::vftable;
  param_1[4] = *param_3;
  param_1[5] = param_3[1];
  param_1[6] = param_3[2];
  uVar1 = param_3[3];
  param_1[8] = param_2;
  param_1[7] = uVar1;
  param_1[1] = 0x16;
  return param_1;
}

