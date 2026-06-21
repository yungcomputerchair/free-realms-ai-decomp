// addr: 0x00d0fc10
// name: FileExtension_lookupThreeCharType
// subsystem: common/common/all
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int FileExtension_lookupThreeCharType(char * extensionText) */

int __cdecl FileExtension_lookupThreeCharType(char *extensionText)

{
  int iVar1;
  int iVar2;
  
                    /* Compares a three-character extension against a small case-insensitive table
                       and returns the matching table index or 0. */
  iVar2 = 1;
  do {
    iVar1 = __strnicmp(extensionText,(&PTR_DAT_01b7fd84)[iVar2],3);
    if (iVar1 == 0) {
      return iVar2;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 3);
  return 0;
}

