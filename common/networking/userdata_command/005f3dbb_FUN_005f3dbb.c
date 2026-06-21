// addr: 0x005f3dbb
// name: FUN_005f3dbb
// subsystem: common/networking/userdata_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 FUN_005f3dbb(void)

{
  int unaff_EBP;
  
                    /* Unidentified helper; no strong strings or named neighbors in sidecar context.
                        */
  FUN_00d83d3c();
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffffec;
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + 0x10);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  while (*(int *)(unaff_EBP + 8) != *(int *)(unaff_EBP + 0xc)) {
    FUN_005f3ceb(*(undefined4 *)(unaff_EBP + 0x10),*(int *)(unaff_EBP + 8));
    *(int *)(unaff_EBP + 0x10) = *(int *)(unaff_EBP + 0x10) + 0x10;
    *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) + 0x10;
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return *(undefined4 *)(unaff_EBP + 0x10);
}

