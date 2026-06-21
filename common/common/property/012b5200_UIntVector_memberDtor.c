// addr: 0x012b5200
// name: UIntVector_memberDtor
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void UIntVector_memberDtor(int owner) */

void __fastcall UIntVector_memberDtor(int owner)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destroys a vector member at owner+0xc by freeing its backing allocation via
                       FUN_012b4590. It is paired with the scalar deleting destructor at 012b58c0.
                        */
  puStack_8 = &LAB_0166d0a6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0xffffffff;
  PropertyVector_freeStorage2((void *)(owner + 0x10));
  ExceptionList = local_c;
  return;
}

