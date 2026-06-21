// addr: 0x01138190
// name: btBvhTriangleMeshShape_ctor
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __thiscall
btBvhTriangleMeshShape_ctor(undefined4 *param_1,void *param_2,undefined1 param_3,char param_4)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs Bullet btBvhTriangleMeshShape: calls triangle mesh base
                       constructor, installs vtable, initializes owned BVH fields and optionally
                       builds the optimized BVH. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0164f978;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  btTriangleMeshShape_ctor(param_1,param_2);
  local_4 = 0;
  *param_1 = btBvhTriangleMeshShape::vftable;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined1 *)(param_1 + 0x12) = param_3;
  *(undefined1 *)((int)param_1 + 0x49) = 0;
  param_1[1] = 0x15;
  if (param_4 != '\0') {
    FUN_01137e70(uVar1);
  }
  ExceptionList = local_c;
  return param_1;
}

