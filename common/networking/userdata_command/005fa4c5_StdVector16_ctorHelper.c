// addr: 0x005fa4c5
// name: StdVector16_ctorHelper
// subsystem: common/networking/userdata_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int StdVector16_ctorHelper(void)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int extraout_ECX;
  int unaff_EBP;
  
                    /* Constructor/helper path for the 16-byte-element vector support code,
                       initializing storage when allocator checks pass. Evidence: called by
                       clear/reset and invokes the copy-construction thunk for vector storage. */
  FUN_00d83d3c();
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffffdc;
  *(int *)(unaff_EBP + -0x14) = extraout_ECX;
  iVar2 = StdVector16_size_005db4ff(*(void **)(unaff_EBP + 8));
  cVar1 = FUN_005ee56f(iVar2);
  if (cVar1 != '\0') {
    *(undefined4 *)(unaff_EBP + -4) = 0;
    puVar3 = (undefined4 *)FUN_005e4970(unaff_EBP + -0x1c);
    puVar4 = (undefined4 *)FUN_005e495c(unaff_EBP + -0x24);
    uVar5 = StdVector16_uninitializedCopyThunk
                      (*puVar4,puVar4[1],*puVar3,puVar3[1],*(undefined4 *)(extraout_ECX + 4));
    *(undefined4 *)(extraout_ECX + 8) = uVar5;
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}

