// addr: 0x01506220
// name: CommandObject_Kill_ctor
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * CommandObject_Kill_ctor(void * this, void * environment, void * arg,
   void * ownedTemp) */

void * __thiscall CommandObject_Kill_ctor(void *this,void *environment,void *arg,void *ownedTemp)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs CommandObject_Kill, sets derived vtables/name, initializes
                       target/source fields from the EvaluationEnvironment, and clears command
                       flags. The final parameter is freed on exit if non-null. */
  puStack_8 = &LAB_016b4fa0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  CommandObject_ctor(this,environment);
  local_4 = CONCAT31(local_4._1_3_,1);
  *(undefined ***)this = CommandObject_Kill::vftable;
  *(undefined ***)((int)this + 8) = CommandObject_Kill::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)this + 0x48),
             "CommandObject_Kill",0x12);
  pvVar1 = EvaluationEnvironment_resolveTarget(environment);
  *(void **)((int)this + 0x68) = pvVar1;
  pvVar1 = EvaluationEnvironment_getGame(environment);
  *(void **)((int)this + 0x30) = pvVar1;
  pvVar1 = EvaluationEnvironment_getOriginCard(environment);
  *(void **)((int)this + 100) = pvVar1;
  pvVar1 = EvaluationEnvironment_getMember14(environment);
  *(void **)((int)this + 0x128) = pvVar1;
  *(undefined4 *)((int)this + 0x124) = 0;
  *(undefined1 *)((int)this + 0x81) = 0;
  local_4 = 0xffffffff;
  if (ownedTemp != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(ownedTemp);
  }
  ExceptionList = local_c;
  return this;
}

