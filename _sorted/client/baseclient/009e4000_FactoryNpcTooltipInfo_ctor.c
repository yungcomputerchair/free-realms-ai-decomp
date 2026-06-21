// addr: 0x009e4000
// name: FactoryNpcTooltipInfo_ctor
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * FactoryNpcTooltipInfo_ctor(void * this) */

void * __fastcall FactoryNpcTooltipInfo_ctor(void *this)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Initializes a FactoryNpcTooltipInfo-like structure by clearing a field at
                       offset 0x14 and constructing its effect-info list member. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_015a6a6b;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined4 *)((int)this + 0x14) = 0;
  FUN_009e1d70(uVar1);
  ExceptionList = local_c;
  return this;
}

