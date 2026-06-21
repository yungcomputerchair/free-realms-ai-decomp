// addr: 0x00847dd0
// name: GuiWebBrowserCtrl_createIfRequested
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GuiWebBrowserCtrl_createIfRequested(int shouldCreate_) */

void __cdecl GuiWebBrowserCtrl_createIfRequested(int shouldCreate_)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Exception-guarded wrapper that constructs/initializes a
                       GuiWebBrowserCtrl-related object via FUN_008479b0 when the input is nonzero.
                       Exact allocation context is unclear. */
  puStack_8 = &LAB_0156f741;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  if (shouldCreate_ != 0) {
    GuiWebBrowserCtrl_ctor((void *)shouldCreate_,(void *)0x0);
  }
  ExceptionList = local_c;
  return;
}

