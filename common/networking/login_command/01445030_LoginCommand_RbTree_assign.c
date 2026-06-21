// addr: 0x01445030
// name: LoginCommand_RbTree_assign
// subsystem: common/networking/login_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * __thiscall LoginCommand_RbTree_assign(void *param_1,void *param_2)

{
  undefined1 local_8 [8];
  
                    /* Assignment wrapper for a red-black-tree-style container: if source differs,
                       it erases the current range and copies the source tree. Exact template type
                       is not exposed, so the name remains generic. */
  if (param_1 != param_2) {
    LoginCommand_RbTree_eraseRange
              (param_1,local_8,param_1,(void *)**(undefined4 **)((int)param_1 + 4),param_1,
               *(undefined4 **)((int)param_1 + 4));
    LoginCommand_RbTree_copyAssign(param_1,param_2);
  }
  return param_1;
}

