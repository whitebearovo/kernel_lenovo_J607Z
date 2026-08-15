#ifndef _LINUX_RCU_UPDATE_TRACE_H
#define _LINUX_RCU_UPDATE_TRACE_H
#define call_rcu_tasks_trace(head, func) call_rcu_tasks((head), (func))

/* 4.19 has no separate Tasks Trace RCU read-side state. */
static inline int rcu_read_lock_trace_held(void)
{
    return 0;
}
#endif
