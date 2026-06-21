// addr: 0x01230420
// name: Scaleform_TCExternalInterface_initOnce
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __fastcall Scaleform_TCExternalInterface_initOnce(int param_1)

{
  void *this;
  TCDelegate *pTVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Initializes the Scaleform external interface delegate once and installs it
                       into GFxWrap. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0165147b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (*(char *)(param_1 + 0x19) == '\0') {
    *(undefined1 *)(param_1 + 0x19) = 1;
    setGlobalCallbackOrPointer(&LAB_012302c0);
    this = Mem_Alloc(4);
    local_4 = 0;
    if (this == (void *)0x0) {
      pTVar1 = (TCDelegate *)0x0;
    }
    else {
      pTVar1 = Scaleform_ScaleformDelegate_ctor(this);
    }
    local_4 = 0xffffffff;
    *(TCDelegate **)(param_1 + 8) = pTVar1;
    GFxWrap::TCSetExternalInterface(pTVar1);
  }
  ExceptionList = local_c;
  return;
}

