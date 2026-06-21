// addr: 0x00d7edb0
// name: SessionReconstitute_buildSessionPath
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool SessionReconstitute_buildSessionPath(void * sessionId, char * rootName,
   char * outPath, void * logger) */

bool __thiscall
SessionReconstitute_buildSessionPath
          (void *this,void *sessionId,char *rootName,char *outPath,void *logger)

{
  char cVar1;
  char *pcVar2;
  longlong lVar3;
  
                    /* Builds a reconstituted session file path by fetching the core file directory,
                       appending a root folder name, and formatting a 64-bit session id as
                       '-%08x%08x.session'. */
  if (*(int *)this == 0 && *(int *)((int)this + 4) == 0) {
    return false;
  }
  cVar1 = FUN_00d812a0(*(undefined4 *)((int)this + 8),rootName,0x104);
  if (cVar1 == '\0') {
    (*(code *)**(undefined4 **)outPath)(outPath,0,"reconstitute: Unable to get core file directory")
    ;
    return false;
  }
  pcVar2 = rootName;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  if ((char *)0x104 < pcVar2 + (0x9f - (int)(rootName + 1))) {
    (*(code *)**(undefined4 **)outPath)
              (outPath,0,"reconstitute: Root folder name too long: %s",rootName);
    return false;
  }
  _strncat(rootName,sessionId,0x40);
  do {
    pcVar2 = rootName;
    rootName = pcVar2 + 1;
  } while (*pcVar2 != '\0');
  lVar3 = __allshr(0x20,*(int *)((int)this + 4));
  _sprintf(pcVar2,"-%08x%08x.session",(int)lVar3);
  return true;
}

