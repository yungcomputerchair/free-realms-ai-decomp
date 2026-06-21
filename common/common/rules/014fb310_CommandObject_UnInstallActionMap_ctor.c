// addr: 0x014fb310
// name: CommandObject_UnInstallActionMap_ctor
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * CommandObject_UnInstallActionMap_ctor(void * this, int actionMapId_,
   void * env) */

void * __thiscall CommandObject_UnInstallActionMap_ctor(void *this,int actionMapId_,void *env)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs CommandObject_UnInstallActionMap, installs vftables, stores
                       action/environment fields, and names the command. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016b3578;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CommandObject_ctor(this,env);
  local_4 = 0;
  *(undefined ***)this = CommandObject_UnInstallActionMap::vftable;
  *(undefined ***)((int)this + 8) = CommandObject_UnInstallActionMap::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)this + 0x48),
             "CommandObject_UnInstallActionMap",0x20);
  pvVar1 = EvaluationEnvironment_getGame(env);
  *(void **)((int)this + 0x30) = pvVar1;
  pvVar1 = EvaluationEnvironment_getOriginCard(env);
  *(void **)((int)this + 100) = pvVar1;
  pvVar1 = EvaluationEnvironment_getOriginCard(env);
  *(void **)((int)this + 0x128) = pvVar1;
  *(int *)((int)this + 0x124) = actionMapId_;
  ExceptionList = local_c;
  return this;
}

