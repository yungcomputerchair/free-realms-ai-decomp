// addr: 0x00962dd0
// name: FUN_00962dd0
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Setting prototype: void * FUN_00962dd0(void * object) */

void * __fastcall FUN_00962dd0(void *object)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
                    /* Initializes a large projectile/effect-related object with default vectors,
                       ids, floats, and an embedded component via FUN_00962730. No vtable or class
                       string identifies the owner. */
  local_14 = 0xffffffff;
  puStack_18 = &LAB_01595f9b;
  local_1c = ExceptionList;
  uVar4 = DAT_01b839d8 ^ (uint)&stack0xffffffd0;
  ExceptionList = &local_1c;
  *(undefined4 *)object = 0;
  *(undefined4 *)((int)object + 4) = 0;
  *(undefined4 *)((int)object + 0x20) = 0xffffffff;
  *(undefined4 *)((int)object + 0x24) = 0;
  uVar3 = uRam01cb54fc;
  uVar2 = uRam01cb54f8;
  uVar1 = uRam01cb54f4;
  *(undefined4 *)((int)object + 0x30) = _DAT_01cb54f0;
  *(undefined4 *)((int)object + 0x34) = uVar1;
  *(undefined4 *)((int)object + 0x38) = uVar2;
  *(undefined4 *)((int)object + 0x3c) = uVar3;
  *(undefined4 *)((int)object + 0x40) = 0;
  *(undefined4 *)((int)object + 0x44) = 0;
  *(undefined4 *)((int)object + 0x48) = _DAT_0175b420;
  *(undefined4 *)((int)object + 0x54) = 0;
  *(undefined4 *)((int)object + 0x58) = 0;
  FUN_00962730(uVar4);
  *(undefined4 *)((int)object + 0xb0) = 0;
  *(undefined4 *)((int)object + 0xb4) = 0;
  ExceptionList = local_1c;
  return object;
}

