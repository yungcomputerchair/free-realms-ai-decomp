// addr: 0x012dda00
// name: FUN_012dda00
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void DeckBuilderValidationState_dtor(void) */

void DeckBuilderValidationState_dtor(void)

{
  uint uVar1;
  void *in_ECX;
  uint unaff_retaddr;
  undefined4 uStack00000004;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destroys several property tree/vector members used by deck builder validation
                       state. */
  puStack_8 = &LAB_01671524;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  local_4 = 4;
  PropertyTree21_clearValues(in_ECX);
  local_4._0_1_ = 3;
  FUN_012d9310(uVar1);
  local_4._0_1_ = 2;
  FUN_012dd990();
  local_4 = CONCAT31(local_4._1_3_,1);
  PropertyTree21_clearAndFreeHeader((int)in_ECX + 0x18);
  PropertyTree21_clearAndFreeHeader((int)in_ECX + 0xc);
  uStack00000004 = 0xffffffff;
  PropertyTree21_clearAndFreeHeader((int)in_ECX);
  ExceptionList = (void *)(unaff_retaddr & 0xffffff00);
  return;
}

