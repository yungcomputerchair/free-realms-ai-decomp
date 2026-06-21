// addr: 0x013fba40
// name: RulesValue_copyCtor
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * RulesValue_copyCtor(void * this, void * source) */

void * __thiscall RulesValue_copyCtor(void *this,void *source)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Copies the leading word from source to this and invokes the vector-copy
                       helper on source+4 into this+4, forming a small value object copy
                       constructor. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0168fcab;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)this = *(undefined4 *)source;
  FUN_0135cf00((int)source + 4);
  ExceptionList = local_c;
  return this;
}

