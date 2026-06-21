// addr: 0x0138a670
// name: Card_callWithSuppressNotifications
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall Card_callWithSuppressNotifications(int *param_1,undefined4 param_2)

{
  code *pcVar1;
  
                    /* Sets a byte guard at offset 0x9c, invokes the virtual method at vtable offset
                       0x16c with the supplied argument, then clears the guard. Used around card
                       deserialize/draw handling. */
  pcVar1 = *(code **)(*param_1 + 0x16c);
  *(undefined1 *)(param_1 + 0x27) = 1;
  (*pcVar1)(param_2);
  *(undefined1 *)(param_1 + 0x27) = 0;
  return;
}

