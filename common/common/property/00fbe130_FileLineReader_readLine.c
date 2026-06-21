// addr: 0x00fbe130
// name: FileLineReader_readLine
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int FileLineReader_readLine(void * self) */

int __fastcall FileLineReader_readLine(void *self)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  
                    /* Reads a line from the FILE* stored at self into a 0x10000-byte buffer at
                       self+4, records the buffer pointer, and returns the string length. Returns -1
                       when no file is present or EOF has been reached. */
  pcVar1 = (char *)((int)self + 4);
  *(char **)((int)self + 0x10004) = pcVar1;
  *pcVar1 = '\0';
  if ((*(void **)self != (void *)0x0) && (iVar3 = CRT_feof(*(void **)self), iVar3 == 0)) {
    FUN_00d8b641(pcVar1,0x10000,*(undefined4 *)self);
    cVar2 = *pcVar1;
    pcVar4 = pcVar1;
    while (cVar2 != '\0') {
      pcVar4 = pcVar4 + 1;
      cVar2 = *pcVar4;
    }
    return (int)pcVar4 - (int)pcVar1;
  }
  return -1;
}

