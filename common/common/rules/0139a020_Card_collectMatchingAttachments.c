// addr: 0x0139a020
// name: Card_collectMatchingAttachments
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Removing unreachable block (ram,0x0139a08e) */
/* WARNING: Removing unreachable block (ram,0x0139a07b) */
/* WARNING: Removing unreachable block (ram,0x0139a10b) */

void Card_collectMatchingAttachments(int param_1,void *param_2)

{
  void **item;
  undefined4 uVar1;
  undefined4 *puVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Collects matching attached/related play elements into a PointerVector using
                       RTTI casts and card relation helpers. */
  puStack_8 = &LAB_01684c08;
  local_c = ExceptionList;
  item = (void **)(DAT_01b839d8 ^ (uint)&stack0xffffffd4);
  ExceptionList = &local_c;
  local_4 = 0;
  uVar1 = FUN_013445f0(param_1);
  FUN_01342b30(uVar1);
  puVar2 = (undefined4 *)0x0;
  while( true ) {
    if (&stack0x00000000 == (undefined1 *)0x1c) {
      FUN_00d83c2d();
    }
    if (puVar2 == (undefined4 *)0x0) break;
    if (&stack0x00000000 == (undefined1 *)0x1c) {
      FUN_00d83c2d();
    }
    FUN_00d83c2d();
    param_1 = FUN_00d8d382(*puVar2,0,&PlayElement::RTTI_Type_Descriptor,&Card::RTTI_Type_Descriptor,
                           0);
    if (param_1 != 0) {
      PointerVector_pushBack(param_2,&param_1,item);
    }
    FUN_00d83c2d();
    puVar2 = puVar2 + 1;
  }
  ExceptionList = local_c;
  return;
}

