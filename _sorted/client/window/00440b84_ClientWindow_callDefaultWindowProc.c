// addr: 0x00440b84
// name: ClientWindow_callDefaultWindowProc
// subsystem: common/client/window
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: undefined4 ClientWindow_callDefaultWindowProc(undefined4 hwnd_, undefined4
   msg_, undefined4 wParam_, undefined4 lParam_) */

undefined4
ClientWindow_callDefaultWindowProc(HWND hwnd_,WPARAM msg_,LPARAM wParam_,undefined4 lParam_)

{
  char cVar1;
  LRESULT LVar2;
  uint unaff_ESI;
  
                    /* Calls an optional global message filter for selected window messages, then
                       dispatches to DefWindowProcW or DefWindowProcA depending on the global
                       Unicode flag. Evidence is the DefWindowProcA/W calls and use from the
                       system-command dispatcher. */
  if ((DAT_01bc44ac != (code *)0x0) &&
     ((unaff_ESI == 0x51 ||
      ((0x10c < unaff_ESI &&
       ((((unaff_ESI < 0x110 || (unaff_ESI == 0x282)) || (unaff_ESI == 0x286)) ||
        (unaff_ESI == 0x290)))))))) {
    cVar1 = (*DAT_01bc44ac)(0,hwnd_);
    if (cVar1 != '\0') {
      return 0;
    }
  }
  if (DAT_01bc4458 != '\0') {
    LVar2 = DefWindowProcW(hwnd_,unaff_ESI,msg_,wParam_);
    return LVar2;
  }
  LVar2 = DefWindowProcA(hwnd_,unaff_ESI,msg_,wParam_);
  return LVar2;
}

