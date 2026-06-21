// addr: 0x014453e0
// name: LoginCommand_RbTree_assign_alt
// subsystem: common/networking/login_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * __thiscall LoginCommand_RbTree_assign_alt(void *param_1,void *param_2)

{
  undefined1 local_8 [8];
  
                    /* Second emitted assignment wrapper for a red-black-tree-style container,
                       erasing the destination then copying the source. It appears as a duplicate
                       template instantiation without class RTTI in this briefing. */
  if (param_1 != param_2) {
    LoginCommand_RbTree_eraseRange
              (param_1,local_8,param_1,(void *)**(undefined4 **)((int)param_1 + 4),param_1,
               *(undefined4 **)((int)param_1 + 4));
    LoginCommand_RbTree_copyAssign(param_1,param_2);
  }
  return param_1;
}

