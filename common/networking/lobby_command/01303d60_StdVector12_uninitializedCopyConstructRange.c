// addr: 0x01303d60
// name: StdVector12_uninitializedCopyConstructRange
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int StdVector12_uninitializedCopyConstructRange(int param_1, int param_2, int
   param_3) */

int __cdecl StdVector12_uninitializedCopyConstructRange(int param_1,int param_2,int param_3)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* Copy-constructs a range of 12-byte records into destination storage and
                       returns the advanced destination pointer. Evidence: loops from param_1 to
                       param_2 by +0xc and calls the 12-byte record copy constructor helper. */
  puStack_c = &LAB_01675ec0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  for (; param_1 != param_2; param_1 = param_1 + 0xc) {
    Record12_copy((void *)param_3,(void *)param_1);
    param_3 = param_3 + 0xc;
  }
  ExceptionList = local_10;
  return (int)(void *)param_3;
}

