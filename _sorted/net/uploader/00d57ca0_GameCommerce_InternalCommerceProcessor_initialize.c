// addr: 0x00d57ca0
// name: GameCommerce_InternalCommerceProcessor_initialize
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __thiscall
GameCommerce_InternalCommerceProcessor_initialize(int param_1,undefined4 param_2)

{
  undefined1 uVar1;
  
                    /* Initializes commerce processing once, allocating an
                       InternalCommerceProcessor/CasHandler object, storing the owner, running a
                       setup helper, and notifying a callback. Evidence is
                       GameCommerce::InternalCommerceProcessor and CasHandler vtable assignments. */
  if (*(char *)(param_1 + 8) != '\0') {
    (**(code **)(**(int **)(param_1 + 4) + 4))(1);
    return 1;
  }
  *(undefined4 *)(param_1 + 4) = param_2;
  DAT_01bf2c58 = Mem_Alloc(0x14);
  if (DAT_01bf2c58 == (undefined4 *)0x0) {
    DAT_01bf2c58 = (undefined4 *)0x0;
  }
  else {
    DAT_01bf2c58[1] = GameCommerce::CasHandler::vftable;
    *DAT_01bf2c58 = GameCommerce::InternalCommerceProcessor::vftable;
    DAT_01bf2c58[1] = GameCommerce::InternalCommerceProcessor::vftable;
    DAT_01bf2c58[2] = param_1;
  }
  uVar1 = FUN_00d57aa0();
  *(undefined1 *)(param_1 + 8) = uVar1;
  (**(code **)(**(int **)(param_1 + 4) + 4))(1);
  return 1;
}

