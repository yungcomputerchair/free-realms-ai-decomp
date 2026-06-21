// addr: 0x007372e0
// name: Deep_Scene_Context_ctor
// subsystem: common/world/scene
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * Deep_Scene_Context_ctor(void * this) */

void * __fastcall Deep_Scene_Context_ctor(void *this)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs the Deep::Scene context by clearing the first two fields,
                       constructing its ParameterCache, and constructing the deferred-draw list. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01552886;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  Deep_ParameterCache_ctor((void *)((int)this + 8));
  local_4 = 0;
  FUN_00735d80(uVar1);
  ExceptionList = local_c;
  return this;
}

