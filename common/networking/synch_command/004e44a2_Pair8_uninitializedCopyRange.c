// addr: 0x004e44a2
// name: Pair8_uninitializedCopyRange
// subsystem: common/networking/synch_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 Pair8_uninitializedCopyRange(void)

{
  int unaff_EBP;
  
                    /* Exception-aware uninitialized copy loop for 8-byte pair-like elements. It
                       copy-constructs each element and returns the final destination cursor. */
  FUN_00d83d3c();
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xfffffff0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  while (*(void **)(unaff_EBP + 8) != *(void **)(unaff_EBP + 0xc)) {
    Pair8_copyConstruct(*(void **)(unaff_EBP + 0x10),*(void **)(unaff_EBP + 8));
    *(int *)(unaff_EBP + 0x10) = *(int *)(unaff_EBP + 0x10) + 8;
    *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) + 8;
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return *(undefined4 *)(unaff_EBP + 0x10);
}

