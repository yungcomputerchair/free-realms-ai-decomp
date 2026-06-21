// addr: 0x012f2b00
// name: CommandLine_getLongOptionValueOrDefault
// subsystem: common/tcg/client
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: long CommandLine_getLongOptionValueOrDefault(void * arguments, void *
   optionName, long defaultValue_) */

long __cdecl
CommandLine_getLongOptionValueOrDefault(void *arguments,void *optionName,long defaultValue_)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  long lVar5;
  
                    /* Finds the first command-line argument containing optionName, parses the
                       substring after the last '=' with atol, and returns defaultValue if absent.
                       CardClient_ctor uses this for options such as --fullscreen. */
  uVar2 = StringVector_findContainingString(arguments,optionName);
  iVar1 = *(int *)((int)arguments + 4);
  if (iVar1 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = (*(int *)((int)arguments + 8) - iVar1) / 0x1c;
  }
  if ((int)uVar2 < iVar3) {
    if ((iVar1 == 0) || ((uint)((*(int *)((int)arguments + 8) - iVar1) / 0x1c) <= uVar2)) {
      FUN_00d83c2d();
    }
    iVar1 = *(int *)((int)arguments + 4) + uVar2 * 0x1c;
    if (*(uint *)(*(int *)((int)arguments + 4) + 0x18 + uVar2 * 0x1c) < 0x10) {
      pcVar4 = (char *)(iVar1 + 4);
    }
    else {
      pcVar4 = *(char **)(iVar1 + 4);
    }
    pcVar4 = _strrchr(pcVar4,0x3d);
    if (pcVar4 != (char *)0x0) {
      lVar5 = _atol(pcVar4 + 1);
      return lVar5;
    }
  }
  return defaultValue_;
}

