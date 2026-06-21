// addr: 0x0138a390
// name: Card_getCardActionCosts
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall Card_getCardActionCosts(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 unaff_ESI;
  
                    /* Logs 'getCardActionCosts' through the owning game/logger and dispatches to
                       the card virtual method at vtable offset 0xf8. The string directly names the
                       operation. */
  Game_logGeneral((void *)param_1[0xc],"getCardActionCosts",unaff_ESI);
  (**(code **)(*param_1 + 0xf8))(param_2,param_3);
  return;
}

