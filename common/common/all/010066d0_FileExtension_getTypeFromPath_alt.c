// addr: 0x010066d0
// name: FileExtension_getTypeFromPath_alt
// subsystem: common/common/all
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int FileExtension_getTypeFromPath_alt(char * pathText) */

int __cdecl FileExtension_getTypeFromPath_alt(char *pathText)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  
                    /* Validates a trailing .xxx extension on a path and maps it through the
                       alternate three-character extension table. */
  pcVar2 = pathText;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  uVar3 = (int)pcVar2 - (int)(pathText + 1);
  if ((4 < uVar3) && (pathText[uVar3 - 4] == '.')) {
    iVar4 = FileExtension_lookupThreeCharType_alt(pathText + (uVar3 - 3));
    return iVar4;
  }
  return 0;
}

