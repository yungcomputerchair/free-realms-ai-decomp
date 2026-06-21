// addr: 0x013840b0
// name: EvaluationEnvironment_buildIndentString
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void EvaluationEnvironment_buildIndentString(void * env, void * outString) */

void __thiscall EvaluationEnvironment_buildIndentString(void *this,void *env,void *outString)

{
  int iVar1;
  
                    /* Clears the output string and appends one indentation character per current
                       EvaluationEnvironment indent level at offset 0x74. */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(env,"",0);
  iVar1 = 0;
  if (0 < *(int *)((int)this + 0x74)) {
    do {
      FUN_01241650(&DAT_01764470,1);
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)((int)this + 0x74));
  }
  return;
}

