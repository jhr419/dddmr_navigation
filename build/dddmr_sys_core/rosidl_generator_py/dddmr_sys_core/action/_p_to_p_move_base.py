# generated from rosidl_generator_py/resource/_idl.py.em
# with input from dddmr_sys_core:action/PToPMoveBase.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PToPMoveBase_Goal(type):
    """Metaclass of message 'PToPMoveBase_Goal'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('dddmr_sys_core')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'dddmr_sys_core.action.PToPMoveBase_Goal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__p_to_p_move_base__goal
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__p_to_p_move_base__goal
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__p_to_p_move_base__goal
            cls._TYPE_SUPPORT = module.type_support_msg__action__p_to_p_move_base__goal
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__p_to_p_move_base__goal

            from geometry_msgs.msg import PoseStamped
            if PoseStamped.__class__._TYPE_SUPPORT is None:
                PoseStamped.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class PToPMoveBase_Goal(metaclass=Metaclass_PToPMoveBase_Goal):
    """Message class 'PToPMoveBase_Goal'."""

    __slots__ = [
        '_target_pose',
        '_target_value',
    ]

    _fields_and_field_types = {
        'target_pose': 'geometry_msgs/PoseStamped',
        'target_value': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'PoseStamped'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from geometry_msgs.msg import PoseStamped
        self.target_pose = kwargs.get('target_pose', PoseStamped())
        self.target_value = kwargs.get('target_value', float())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.target_pose != other.target_pose:
            return False
        if self.target_value != other.target_value:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def target_pose(self):
        """Message field 'target_pose'."""
        return self._target_pose

    @target_pose.setter
    def target_pose(self, value):
        if __debug__:
            from geometry_msgs.msg import PoseStamped
            assert \
                isinstance(value, PoseStamped), \
                "The 'target_pose' field must be a sub message of type 'PoseStamped'"
        self._target_pose = value

    @builtins.property
    def target_value(self):
        """Message field 'target_value'."""
        return self._target_value

    @target_value.setter
    def target_value(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'target_value' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'target_value' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._target_value = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_PToPMoveBase_Result(type):
    """Metaclass of message 'PToPMoveBase_Result'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('dddmr_sys_core')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'dddmr_sys_core.action.PToPMoveBase_Result')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__p_to_p_move_base__result
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__p_to_p_move_base__result
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__p_to_p_move_base__result
            cls._TYPE_SUPPORT = module.type_support_msg__action__p_to_p_move_base__result
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__p_to_p_move_base__result

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class PToPMoveBase_Result(metaclass=Metaclass_PToPMoveBase_Result):
    """Message class 'PToPMoveBase_Result'."""

    __slots__ = [
        '_status',
        '_result',
    ]

    _fields_and_field_types = {
        'status': 'int32',
        'result': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.status = kwargs.get('status', int())
        self.result = kwargs.get('result', str())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.status != other.status:
            return False
        if self.result != other.result:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def status(self):
        """Message field 'status'."""
        return self._status

    @status.setter
    def status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'status' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'status' field must be an integer in [-2147483648, 2147483647]"
        self._status = value

    @builtins.property
    def result(self):
        """Message field 'result'."""
        return self._result

    @result.setter
    def result(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'result' field must be of type 'str'"
        self._result = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_PToPMoveBase_Feedback(type):
    """Metaclass of message 'PToPMoveBase_Feedback'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('dddmr_sys_core')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'dddmr_sys_core.action.PToPMoveBase_Feedback')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__p_to_p_move_base__feedback
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__p_to_p_move_base__feedback
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__p_to_p_move_base__feedback
            cls._TYPE_SUPPORT = module.type_support_msg__action__p_to_p_move_base__feedback
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__p_to_p_move_base__feedback

            from geometry_msgs.msg import TransformStamped
            if TransformStamped.__class__._TYPE_SUPPORT is None:
                TransformStamped.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class PToPMoveBase_Feedback(metaclass=Metaclass_PToPMoveBase_Feedback):
    """Message class 'PToPMoveBase_Feedback'."""

    __slots__ = [
        '_base_position',
        '_last_decision',
        '_current_decision',
    ]

    _fields_and_field_types = {
        'base_position': 'geometry_msgs/TransformStamped',
        'last_decision': 'string',
        'current_decision': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'TransformStamped'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from geometry_msgs.msg import TransformStamped
        self.base_position = kwargs.get('base_position', TransformStamped())
        self.last_decision = kwargs.get('last_decision', str())
        self.current_decision = kwargs.get('current_decision', str())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.base_position != other.base_position:
            return False
        if self.last_decision != other.last_decision:
            return False
        if self.current_decision != other.current_decision:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def base_position(self):
        """Message field 'base_position'."""
        return self._base_position

    @base_position.setter
    def base_position(self, value):
        if __debug__:
            from geometry_msgs.msg import TransformStamped
            assert \
                isinstance(value, TransformStamped), \
                "The 'base_position' field must be a sub message of type 'TransformStamped'"
        self._base_position = value

    @builtins.property
    def last_decision(self):
        """Message field 'last_decision'."""
        return self._last_decision

    @last_decision.setter
    def last_decision(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'last_decision' field must be of type 'str'"
        self._last_decision = value

    @builtins.property
    def current_decision(self):
        """Message field 'current_decision'."""
        return self._current_decision

    @current_decision.setter
    def current_decision(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'current_decision' field must be of type 'str'"
        self._current_decision = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_PToPMoveBase_SendGoal_Request(type):
    """Metaclass of message 'PToPMoveBase_SendGoal_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('dddmr_sys_core')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'dddmr_sys_core.action.PToPMoveBase_SendGoal_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__p_to_p_move_base__send_goal__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__p_to_p_move_base__send_goal__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__p_to_p_move_base__send_goal__request
            cls._TYPE_SUPPORT = module.type_support_msg__action__p_to_p_move_base__send_goal__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__p_to_p_move_base__send_goal__request

            from dddmr_sys_core.action import PToPMoveBase
            if PToPMoveBase.Goal.__class__._TYPE_SUPPORT is None:
                PToPMoveBase.Goal.__class__.__import_type_support__()

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class PToPMoveBase_SendGoal_Request(metaclass=Metaclass_PToPMoveBase_SendGoal_Request):
    """Message class 'PToPMoveBase_SendGoal_Request'."""

    __slots__ = [
        '_goal_id',
        '_goal',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
        'goal': 'dddmr_sys_core/PToPMoveBase_Goal',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['dddmr_sys_core', 'action'], 'PToPMoveBase_Goal'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())
        from dddmr_sys_core.action._p_to_p_move_base import PToPMoveBase_Goal
        self.goal = kwargs.get('goal', PToPMoveBase_Goal())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.goal_id != other.goal_id:
            return False
        if self.goal != other.goal:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value

    @builtins.property
    def goal(self):
        """Message field 'goal'."""
        return self._goal

    @goal.setter
    def goal(self, value):
        if __debug__:
            from dddmr_sys_core.action._p_to_p_move_base import PToPMoveBase_Goal
            assert \
                isinstance(value, PToPMoveBase_Goal), \
                "The 'goal' field must be a sub message of type 'PToPMoveBase_Goal'"
        self._goal = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_PToPMoveBase_SendGoal_Response(type):
    """Metaclass of message 'PToPMoveBase_SendGoal_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('dddmr_sys_core')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'dddmr_sys_core.action.PToPMoveBase_SendGoal_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__p_to_p_move_base__send_goal__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__p_to_p_move_base__send_goal__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__p_to_p_move_base__send_goal__response
            cls._TYPE_SUPPORT = module.type_support_msg__action__p_to_p_move_base__send_goal__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__p_to_p_move_base__send_goal__response

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class PToPMoveBase_SendGoal_Response(metaclass=Metaclass_PToPMoveBase_SendGoal_Response):
    """Message class 'PToPMoveBase_SendGoal_Response'."""

    __slots__ = [
        '_accepted',
        '_stamp',
    ]

    _fields_and_field_types = {
        'accepted': 'boolean',
        'stamp': 'builtin_interfaces/Time',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.accepted = kwargs.get('accepted', bool())
        from builtin_interfaces.msg import Time
        self.stamp = kwargs.get('stamp', Time())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.accepted != other.accepted:
            return False
        if self.stamp != other.stamp:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def accepted(self):
        """Message field 'accepted'."""
        return self._accepted

    @accepted.setter
    def accepted(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'accepted' field must be of type 'bool'"
        self._accepted = value

    @builtins.property
    def stamp(self):
        """Message field 'stamp'."""
        return self._stamp

    @stamp.setter
    def stamp(self, value):
        if __debug__:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'stamp' field must be a sub message of type 'Time'"
        self._stamp = value


class Metaclass_PToPMoveBase_SendGoal(type):
    """Metaclass of service 'PToPMoveBase_SendGoal'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('dddmr_sys_core')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'dddmr_sys_core.action.PToPMoveBase_SendGoal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__action__p_to_p_move_base__send_goal

            from dddmr_sys_core.action import _p_to_p_move_base
            if _p_to_p_move_base.Metaclass_PToPMoveBase_SendGoal_Request._TYPE_SUPPORT is None:
                _p_to_p_move_base.Metaclass_PToPMoveBase_SendGoal_Request.__import_type_support__()
            if _p_to_p_move_base.Metaclass_PToPMoveBase_SendGoal_Response._TYPE_SUPPORT is None:
                _p_to_p_move_base.Metaclass_PToPMoveBase_SendGoal_Response.__import_type_support__()


class PToPMoveBase_SendGoal(metaclass=Metaclass_PToPMoveBase_SendGoal):
    from dddmr_sys_core.action._p_to_p_move_base import PToPMoveBase_SendGoal_Request as Request
    from dddmr_sys_core.action._p_to_p_move_base import PToPMoveBase_SendGoal_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_PToPMoveBase_GetResult_Request(type):
    """Metaclass of message 'PToPMoveBase_GetResult_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('dddmr_sys_core')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'dddmr_sys_core.action.PToPMoveBase_GetResult_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__p_to_p_move_base__get_result__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__p_to_p_move_base__get_result__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__p_to_p_move_base__get_result__request
            cls._TYPE_SUPPORT = module.type_support_msg__action__p_to_p_move_base__get_result__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__p_to_p_move_base__get_result__request

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class PToPMoveBase_GetResult_Request(metaclass=Metaclass_PToPMoveBase_GetResult_Request):
    """Message class 'PToPMoveBase_GetResult_Request'."""

    __slots__ = [
        '_goal_id',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.goal_id != other.goal_id:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_PToPMoveBase_GetResult_Response(type):
    """Metaclass of message 'PToPMoveBase_GetResult_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('dddmr_sys_core')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'dddmr_sys_core.action.PToPMoveBase_GetResult_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__p_to_p_move_base__get_result__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__p_to_p_move_base__get_result__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__p_to_p_move_base__get_result__response
            cls._TYPE_SUPPORT = module.type_support_msg__action__p_to_p_move_base__get_result__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__p_to_p_move_base__get_result__response

            from dddmr_sys_core.action import PToPMoveBase
            if PToPMoveBase.Result.__class__._TYPE_SUPPORT is None:
                PToPMoveBase.Result.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class PToPMoveBase_GetResult_Response(metaclass=Metaclass_PToPMoveBase_GetResult_Response):
    """Message class 'PToPMoveBase_GetResult_Response'."""

    __slots__ = [
        '_status',
        '_result',
    ]

    _fields_and_field_types = {
        'status': 'int8',
        'result': 'dddmr_sys_core/PToPMoveBase_Result',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['dddmr_sys_core', 'action'], 'PToPMoveBase_Result'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.status = kwargs.get('status', int())
        from dddmr_sys_core.action._p_to_p_move_base import PToPMoveBase_Result
        self.result = kwargs.get('result', PToPMoveBase_Result())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.status != other.status:
            return False
        if self.result != other.result:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def status(self):
        """Message field 'status'."""
        return self._status

    @status.setter
    def status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'status' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'status' field must be an integer in [-128, 127]"
        self._status = value

    @builtins.property
    def result(self):
        """Message field 'result'."""
        return self._result

    @result.setter
    def result(self, value):
        if __debug__:
            from dddmr_sys_core.action._p_to_p_move_base import PToPMoveBase_Result
            assert \
                isinstance(value, PToPMoveBase_Result), \
                "The 'result' field must be a sub message of type 'PToPMoveBase_Result'"
        self._result = value


class Metaclass_PToPMoveBase_GetResult(type):
    """Metaclass of service 'PToPMoveBase_GetResult'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('dddmr_sys_core')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'dddmr_sys_core.action.PToPMoveBase_GetResult')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__action__p_to_p_move_base__get_result

            from dddmr_sys_core.action import _p_to_p_move_base
            if _p_to_p_move_base.Metaclass_PToPMoveBase_GetResult_Request._TYPE_SUPPORT is None:
                _p_to_p_move_base.Metaclass_PToPMoveBase_GetResult_Request.__import_type_support__()
            if _p_to_p_move_base.Metaclass_PToPMoveBase_GetResult_Response._TYPE_SUPPORT is None:
                _p_to_p_move_base.Metaclass_PToPMoveBase_GetResult_Response.__import_type_support__()


class PToPMoveBase_GetResult(metaclass=Metaclass_PToPMoveBase_GetResult):
    from dddmr_sys_core.action._p_to_p_move_base import PToPMoveBase_GetResult_Request as Request
    from dddmr_sys_core.action._p_to_p_move_base import PToPMoveBase_GetResult_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_PToPMoveBase_FeedbackMessage(type):
    """Metaclass of message 'PToPMoveBase_FeedbackMessage'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('dddmr_sys_core')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'dddmr_sys_core.action.PToPMoveBase_FeedbackMessage')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__p_to_p_move_base__feedback_message
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__p_to_p_move_base__feedback_message
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__p_to_p_move_base__feedback_message
            cls._TYPE_SUPPORT = module.type_support_msg__action__p_to_p_move_base__feedback_message
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__p_to_p_move_base__feedback_message

            from dddmr_sys_core.action import PToPMoveBase
            if PToPMoveBase.Feedback.__class__._TYPE_SUPPORT is None:
                PToPMoveBase.Feedback.__class__.__import_type_support__()

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class PToPMoveBase_FeedbackMessage(metaclass=Metaclass_PToPMoveBase_FeedbackMessage):
    """Message class 'PToPMoveBase_FeedbackMessage'."""

    __slots__ = [
        '_goal_id',
        '_feedback',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
        'feedback': 'dddmr_sys_core/PToPMoveBase_Feedback',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['dddmr_sys_core', 'action'], 'PToPMoveBase_Feedback'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())
        from dddmr_sys_core.action._p_to_p_move_base import PToPMoveBase_Feedback
        self.feedback = kwargs.get('feedback', PToPMoveBase_Feedback())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.goal_id != other.goal_id:
            return False
        if self.feedback != other.feedback:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value

    @builtins.property
    def feedback(self):
        """Message field 'feedback'."""
        return self._feedback

    @feedback.setter
    def feedback(self, value):
        if __debug__:
            from dddmr_sys_core.action._p_to_p_move_base import PToPMoveBase_Feedback
            assert \
                isinstance(value, PToPMoveBase_Feedback), \
                "The 'feedback' field must be a sub message of type 'PToPMoveBase_Feedback'"
        self._feedback = value


class Metaclass_PToPMoveBase(type):
    """Metaclass of action 'PToPMoveBase'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('dddmr_sys_core')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'dddmr_sys_core.action.PToPMoveBase')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_action__action__p_to_p_move_base

            from action_msgs.msg import _goal_status_array
            if _goal_status_array.Metaclass_GoalStatusArray._TYPE_SUPPORT is None:
                _goal_status_array.Metaclass_GoalStatusArray.__import_type_support__()
            from action_msgs.srv import _cancel_goal
            if _cancel_goal.Metaclass_CancelGoal._TYPE_SUPPORT is None:
                _cancel_goal.Metaclass_CancelGoal.__import_type_support__()

            from dddmr_sys_core.action import _p_to_p_move_base
            if _p_to_p_move_base.Metaclass_PToPMoveBase_SendGoal._TYPE_SUPPORT is None:
                _p_to_p_move_base.Metaclass_PToPMoveBase_SendGoal.__import_type_support__()
            if _p_to_p_move_base.Metaclass_PToPMoveBase_GetResult._TYPE_SUPPORT is None:
                _p_to_p_move_base.Metaclass_PToPMoveBase_GetResult.__import_type_support__()
            if _p_to_p_move_base.Metaclass_PToPMoveBase_FeedbackMessage._TYPE_SUPPORT is None:
                _p_to_p_move_base.Metaclass_PToPMoveBase_FeedbackMessage.__import_type_support__()


class PToPMoveBase(metaclass=Metaclass_PToPMoveBase):

    # The goal message defined in the action definition.
    from dddmr_sys_core.action._p_to_p_move_base import PToPMoveBase_Goal as Goal
    # The result message defined in the action definition.
    from dddmr_sys_core.action._p_to_p_move_base import PToPMoveBase_Result as Result
    # The feedback message defined in the action definition.
    from dddmr_sys_core.action._p_to_p_move_base import PToPMoveBase_Feedback as Feedback

    class Impl:

        # The send_goal service using a wrapped version of the goal message as a request.
        from dddmr_sys_core.action._p_to_p_move_base import PToPMoveBase_SendGoal as SendGoalService
        # The get_result service using a wrapped version of the result message as a response.
        from dddmr_sys_core.action._p_to_p_move_base import PToPMoveBase_GetResult as GetResultService
        # The feedback message with generic fields which wraps the feedback message.
        from dddmr_sys_core.action._p_to_p_move_base import PToPMoveBase_FeedbackMessage as FeedbackMessage

        # The generic service to cancel a goal.
        from action_msgs.srv._cancel_goal import CancelGoal as CancelGoalService
        # The generic message for get the status of a goal.
        from action_msgs.msg._goal_status_array import GoalStatusArray as GoalStatusMessage

    def __init__(self):
        raise NotImplementedError('Action classes can not be instantiated')
