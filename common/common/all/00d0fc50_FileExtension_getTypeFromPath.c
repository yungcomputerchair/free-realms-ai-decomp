// addr: 0x00d0fc50
// name: FileExtension_getTypeFromPath
// subsystem: common/common/all
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int FileExtension_getTypeFromPath(char * pathText) */

int __cdecl FileExtension_getTypeFromPath(char *pathText)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  
                    /* Checks that a path has a dot four characters from the end and maps the
                       trailing three-character extension through FileExtension_lookupThreeCharType.
                        */
  pcVar2 = pathText;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  uVar3 = (int)pcVar2 - (int)(pathText + 1);
  if ((4 < uVar3) && (pathText[uVar3 - 4] == '.')) {
    iVar4 = FileExtension_lookupThreeCharType(pathText + (uVar3 - 3));
    return iVar4;
  }
  return 0;
}

