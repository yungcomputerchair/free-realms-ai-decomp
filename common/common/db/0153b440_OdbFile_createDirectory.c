// addr: 0x0153b440
// name: OdbFile_createDirectory
// subsystem: common/common/db
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int OdbFile_createDirectory(char * directoryPath) */

int __cdecl OdbFile_createDirectory(char *directoryPath)

{
  BOOL BVar1;
  DWORD DVar2;
  
                    /* Creates a directory with CreateDirectoryA and returns 0 on success or -1
                       after translating GetLastError on failure. */
  BVar1 = CreateDirectoryA(directoryPath,(LPSECURITY_ATTRIBUTES)0x0);
  if (BVar1 == 0) {
    DVar2 = GetLastError();
  }
  else {
    DVar2 = 0;
  }
  if (DVar2 != 0) {
    FUN_00d8e478(DVar2);
    return -1;
  }
  return 0;
}

