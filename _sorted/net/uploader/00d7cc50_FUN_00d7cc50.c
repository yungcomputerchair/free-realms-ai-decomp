// addr: 0x00d7cc50
// name: FUN_00d7cc50
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall FUN_00d7cc50(undefined4 *param_1,undefined4 param_2)

{
  void *pvVar1;
  
                    /* Allocates a large global asset/display helper object, stores it through the
                       caller-provided pointer, then runs a secondary initialization routine. The
                       caller is Client_InitAssetsAndDisplay, but no vtable or class evidence
                       identifies the helper. */
  pvVar1 = Mem_Alloc(0x9264);
  if (pvVar1 == (void *)0x0) {
    DAT_01bf3258 = 0;
  }
  else {
    DAT_01bf3258 = FUN_00d7c470();
  }
  *param_1 = DAT_01bf3258;
  FUN_00d7ca90(param_1,param_2);
  return;
}

