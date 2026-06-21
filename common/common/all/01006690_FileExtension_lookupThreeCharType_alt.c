// addr: 0x01006690
// name: FileExtension_lookupThreeCharType_alt
// subsystem: common/common/all
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int FileExtension_lookupThreeCharType_alt(char * extensionText) */

int __cdecl FileExtension_lookupThreeCharType_alt(char *extensionText)

{
  int iVar1;
  int iVar2;
  
                    /* Looks up a three-character extension in a small case-insensitive table and
                       returns its index, or 0 if not found. */
  iVar2 = 1;
  do {
    iVar1 = __strnicmp(extensionText,(&PTR_DAT_01b9ab7c)[iVar2],3);
    if (iVar1 == 0) {
      return iVar2;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 2);
  return 0;
}

