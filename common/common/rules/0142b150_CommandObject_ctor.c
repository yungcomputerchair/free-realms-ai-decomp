// addr: 0x0142b150
// name: CommandObject_ctor
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * CommandObject_ctor(void * this, void * environment) */

void * __thiscall CommandObject_ctor(void *this,void *environment)

{
  void *sourceEnv;
  void *playElement;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Base constructor for CommandObject: sets CommandObject vtables, initializes
                       strings/flags/containers, assigns the name 'CommandObject', and records an
                       EvaluationEnvironment-derived pointer. Called by many CommandObject_*
                       constructors. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01695901;
  local_c = ExceptionList;
  sourceEnv = (void *)(DAT_01b839d8 ^ (uint)&stack0xffffffe0);
  ExceptionList = &local_c;
  PlayElement_ctor();
  *(undefined ***)this = CommandObject::vftable;
  *(undefined ***)((int)this + 8) = CommandObject::vftable;
  *(undefined4 *)((int)this + 0x60) = 0xf;
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined1 *)((int)this + 0x4c) = 0;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined1 *)((int)this + 0x80) = 0;
  *(undefined1 *)((int)this + 0x81) = 1;
  *(undefined1 *)((int)this + 0x82) = 0;
  EvaluationEnvironment_ctor();
  local_4 = CONCAT31(local_4._1_3_,2);
  *(undefined1 *)((int)this + 0x118) = 0;
  *(undefined4 *)((int)this + 0x11c) = 0;
  *(undefined4 *)((int)this + 0x120) = 1;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)this + 0x48),
             "CommandObject",0xd);
  EvaluationEnvironment_copyFrom((void *)((int)this + 0x84),environment,sourceEnv);
  playElement = EvaluationEnvironment_getGame((void *)((int)this + 0x84));
  *(void **)((int)this + 0x30) = playElement;
  FUN_01340230(this,playElement,(int)sourceEnv);
  ExceptionList = local_c;
  return this;
}

