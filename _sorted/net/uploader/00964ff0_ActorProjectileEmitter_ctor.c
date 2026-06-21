// addr: 0x00964ff0
// name: ActorProjectileEmitter_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * ActorProjectileEmitter_ctor(void * this, int arg_) */

void * __thiscall ActorProjectileEmitter_ctor(void *this,int arg_)

{
  uint count_;
  void *source;
  int this_;
  int in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_00000014;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs ActorProjectileEmitter from ActorEffectEmitter, initializes an
                       IString, projectile state, and a SoeUtil::Array<Target>. Vtable identifies
                       the class. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_015964a2;
  local_c = ExceptionList;
  count_ = DAT_01b839d8 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  ActorEffectEmitter_ctor(this,arg_,in_stack_00000008,in_stack_0000000c);
  this_ = 0;
  *(undefined ***)this = ActorProjectileEmitter::vftable;
  *(undefined4 *)((int)this + 0xa0) = 0;
  *(undefined ***)((int)this + 0xa4) = SoeUtil::IString<char>::vftable;
  *(undefined **)((int)this + 0xa8) = &DAT_01be5188;
  *(undefined4 *)((int)this + 0xb0) = 0;
  *(undefined4 *)((int)this + 0xac) = 0;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  FUN_008eb0a0();
  local_4 = CONCAT31(local_4._1_3_,2);
  *(undefined4 *)((int)this + 400) = SoeUtil::Array<Target,0,1>::vftable;
  *(undefined4 *)((int)this + 0x194) = 0;
  *(undefined4 *)((int)this + 0x198) = 0;
  *(undefined4 *)((int)this + 0x19c) = 0;
  source = *(void **)(in_stack_00000014 + 8);
  if ((int)source < 1) {
    source = (void *)0x0;
  }
  else {
    this_ = *(int *)(in_stack_00000014 + 4);
  }
  TargetArray_appendRange((undefined4 *)((int)this + 400),this_,source,count_);
  ExceptionList = local_c;
  return this;
}

