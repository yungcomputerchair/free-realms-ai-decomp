// addr: 0x00d83466
// name: check_managed_app
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Library Function - Single Match
    _check_managed_app
   
   Library: Visual Studio 2005 Release */

bool __cdecl check_managed_app(void)

{
  if ((((IMAGE_DOS_HEADER_00400000.e_magic == (char  [2])0x5a4d) &&
       (*(int *)(IMAGE_DOS_HEADER_00400000.e_lfanew + 0x400000) == 0x4550)) &&
      (*(short *)((int)IMAGE_DOS_HEADER_00400000.e_res_4_ + (IMAGE_DOS_HEADER_00400000.e_lfanew - 4)
                 ) == 0x10b)) &&
     (0xe < *(uint *)(IMAGE_DOS_HEADER_00400000.e_program +
                     IMAGE_DOS_HEADER_00400000.e_lfanew + 0x34))) {
    return *(int *)(&UNK_00400080.field_0x68 + IMAGE_DOS_HEADER_00400000.e_lfanew) != 0;
  }
  return false;
}

