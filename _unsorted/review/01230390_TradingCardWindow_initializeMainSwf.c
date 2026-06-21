// addr: 0x01230390
// name: TradingCardWindow_initializeMainSwf
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void TradingCardWindow_initializeMainSwf(void * thisPtr, int uiContext_) */

void __thiscall TradingCardWindow_initializeMainSwf(void *this,void *thisPtr,int uiContext_)

{
                    /* Stores the UI context, loads .\UI\TradingCard\TCCW_Main.swf, clears another
                       UI slot, and sets trading-card window state fields. */
  *(void **)((int)this + 0xc) = thisPtr;
  (**(code **)(*(int *)((int)thisPtr + 0xe8) + 0x14))(0x1c,".\\UI\\TradingCard\\TCCW_Main.swf");
  (**(code **)(*(int *)(*(int *)((int)this + 0xc) + 0xe8) + 0x14))(0x1b,&DAT_0175b400);
  *(undefined1 *)(*(int *)((int)this + 0xc) + 0x15c) = 1;
  *(undefined4 *)(*(int *)((int)this + 0xc) + 0x160) = 0x82;
  return;
}

